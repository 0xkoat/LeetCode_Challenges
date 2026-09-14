#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int mostBooked(int n, vector<vector<int>> &meetings)
    {

        vector<long long> room_Availability(n, 0);
        vector<int> meeting_Count(n, 0);
        sort(meetings.begin(), meetings.end());

        for (auto &meeting : meetings)
        {

            int start = meeting[0], end = meeting[1];
            long long min_availability = LLONG_MAX;
            int min_available_room = 0;
            bool found_unused_room = false;

            for (int i = 0; i < n; i++)
            {
                if (room_Availability[i] <= start)
                {
                    found_unused_room = true;
                    meeting_Count[i]++;
                    room_Availability[i] = end;
                    break;
                }

                if (min_availability > room_Availability[i])
                {
                    min_availability = room_Availability[i];
                    min_available_room = i;
                }
            }

            if (!found_unused_room)
            {
                room_Availability[min_available_room] += end - start;
                meeting_Count[min_available_room]++;
            }
        }
        int max_meeting = 0, max_room = 0;
        for (int i = 0; i < n; i++)
        {
            if (meeting_Count[i] > max_meeting)
            {
                max_meeting = meeting_Count[i];
                max_room = i;
            }
        }
        return max_room;
    }
};