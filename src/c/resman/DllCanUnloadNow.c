/* DllCanUnloadNow - 0x51001066 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


/* WARNING: Removing unreachable block (ram,0x51001093) */

HRESULT DllCanUnloadNow(void)

{
  bool bVar1;
  
                    /* 0x1066  1  DllCanUnloadNow */
  bVar1 = DAT_510092e4 != 0;
  if (bVar1 == 0) {
    FUN_51001d41();
  }
  return (uint)bVar1;
}


