/* DllCanUnloadNow - 0x5000295e in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


HRESULT DllCanUnloadNow(void)

{
                    /* 0x295e  1  DllCanUnloadNow */
  FUN_5000583a();
  return (uint)(DAT_5001da54 != 0);
}


