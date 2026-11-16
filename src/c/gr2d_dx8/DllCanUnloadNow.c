/* DllCanUnloadNow - 0x50401066 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


HRESULT DllCanUnloadNow(void)

{
                    /* 0x1066  1  DllCanUnloadNow */
  return (uint)(DAT_50438a3c != 0);
}


