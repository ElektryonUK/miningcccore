using Miningcore.Contracts;
using Miningcore.Extensions;
using Miningcore.Native;

namespace Miningcore.Crypto.Hashing.Algorithms;

[Identifier("groestl-myriad")]
public unsafe class Kezzak : IHashAlgorithm
{
    public void Digest(ReadOnlySpan<byte> data, Span<byte> result, params object[] extra)
    {
        Contract.Requires<ArgumentException>(result.Length >= 32);

        fixed (byte* input = data)
        {
            fixed (byte* output = result)
            {
                Multihash.kezzak(input, output, (uint) data.Length);
            }
        }
    }
}
