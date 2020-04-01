#include <glog/logging.h>

int main(int argc, char *argv[]) {
    int ret = glog2speech_init(google::NOTICE, argv[0], "./", "server.log");
    if (ret != 0) {
        fprintf(stderr, "glog init failed with error=%d", ret);
        return -1;
    }
    
    LOG(TRACE) << "STREAM TRACE";
    LOG(DEBUG) << "STREAM DEBUG";
    LOG(INFO) << "STREAM INFO";
    LOG(NOTICE) << "STREAM NOTICE";
    LOG(WARNING) << "STREAM WARNING";
    /* 实测ERROR级别可以输出到标准错误 */
    LOG(ERROR) << "STREAM ERROR";
    /* 实测FATAL可以产生coredump */
    // LOG(FATAL) << "STREAM FATAL"

    /* 实测glog2speech的旧接口兼容可用 */
    TRACE_LOG("FMT TRACE");
    DEBUG_LOG("FMT DEBUG");
    INFO_LOG("FMT INFO");
    NOTICE_LOG("FMT NOTICE");
    WARNING_LOG("FMT WARNING");
    ERROR_LOG("FMT ERROR");
    /* 实测这个FATAL被屏蔽 */
    FATAL_LOG("FMT FATAL");

    /* create a SIGSEGV */
    char * c = "hello, glog!";
    /* 实测可以捕捉到这个coredump并输出堆栈到文件 */
    // c[0] = 'H';

    return 0;
}
