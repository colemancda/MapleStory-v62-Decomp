/* DllCanUnloadNow - 0x50c02b43 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


HRESULT DllCanUnloadNow(void)

{
                    /* 0x2b43  1  DllCanUnloadNow */
  return (uint)(DAT_50c1ca34 != 0);
}


