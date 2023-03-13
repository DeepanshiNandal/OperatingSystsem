#include <iostream>
#include <queue>
#include <iomanip>

using namespace std;

struct Query {
    int arrival_time; // time when query arrived
    int process_time; // time required to process the query
};

int main() {
    const int START_TIME = 10; // start time of Sudesh Sharma
    const int END_TIME = 12; // end time of Sudesh Sharma
    const int MAX_QUERY_TIME = 20; // maximum time Sudesh can spend on a query
    const int MAX_QUERIES = 100; // maximum number of queries that can be handled
    int total_queries_processed = 0; // total number of queries processed
    int total_time_spent = 0; // total time Sudesh spent on handling queries
    queue<Query> student_queue; // queue for student queries
    queue<Query> faculty_queue; // queue for faculty queries

    // simulate the queries arriving
    srand(time(NULL));
    for (int i = START_TIME; i < END_TIME; i++) {
        // generate a random number between 0 and 1
        float r = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);

        // if the random number is less than 0.5, a student query arrives
        if (r < 0.5) {
            Query q;
            q.arrival_time = i;
            q.process_time = rand() % MAX_QUERY_TIME + 1; // generate a random process time between 1 and MAX_QUERY_TIME
            student_queue.push(q);
        }