<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: src/proto/grpc/testing/stats.proto

namespace GPBMetadata\Src\Proto\Grpc\Testing;

class Stats
{
    public static $is_initialized = false;

    public static function initOnce() {
        $pool = \Google\Protobuf\Internal\DescriptorPool::getGeneratedPool();

        if (static::$is_initialized == true) {
          return;
        }
        \GPBMetadata\Src\Proto\Grpc\Core\Stats::initOnce();
        $pool->internalAddGeneratedFile(hex2bin(
            "0ada050a227372632f70726f746f2f677270632f74657374696e672f73746174732e70726f746f120c677270632e74657374696e6722b7010a0b536572766572537461747312140a0c74696d655f656c617073656418012001280112110a0974696d655f7573657218022001280112130a0b74696d655f73797374656d18032001280112160a0e746f74616c5f6370755f74696d6518042001280412150a0d69646c655f6370755f74696d6518052001280412150a0d63715f706f6c6c5f636f756e7418062001280412240a0a636f72655f737461747318072001280b32102e677270632e636f72652e5374617473223b0a0f486973746f6772616d506172616d7312120a0a7265736f6c7574696f6e18012001280112140a0c6d61785f706f737369626c6518022001280122770a0d486973746f6772616d44617461120e0a066275636b657418012003280d12100a086d696e5f7365656e18022001280112100a086d61785f7365656e180320012801120b0a0373756d18042001280112160a0e73756d5f6f665f73717561726573180520012801120d0a05636f756e7418062001280122380a1252657175657374526573756c74436f756e7412130a0b7374617475735f636f6465180120012805120d0a05636f756e7418022001280322f3010a0b436c69656e745374617473122e0a096c6174656e6369657318012001280b321b2e677270632e74657374696e672e486973746f6772616d4461746112140a0c74696d655f656c617073656418022001280112110a0974696d655f7573657218032001280112130a0b74696d655f73797374656d18042001280112390a0f726571756573745f726573756c747318052003280b32202e677270632e74657374696e672e52657175657374526573756c74436f756e7412150a0d63715f706f6c6c5f636f756e7418062001280412240a0a636f72655f737461747318072001280b32102e677270632e636f72652e5374617473620670726f746f33"
        ), true);

        static::$is_initialized = true;
    }
}

