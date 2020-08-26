#pragma once

#include <vector>
#include <string>

namespace zprof
{

    struct TrackData
    {
        std::string test_name;
        long long int start;
        long long int end;
        long long int duration;
        double duration_ms;

        TrackData(std::string _test_name) : test_name(_test_name) {}
    };
    
    class Track
    {
    protected:
        std::vector<TrackData *> m_Tracks;

    public:
        void log_tracks_data();

        // void output_tracks_json_file();
    };

} // namespace zprof