/* DllCanUnloadNow - 0x51802dd8 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


HRESULT DllCanUnloadNow(void)

{
  bool bVar1;
  
                    /* 0x2dd8  1  DllCanUnloadNow */
  FUN_518039c8(0x5181f888);
  bVar1 = DAT_5181f8a0 != 0;
  if (bVar1 == 0) {
    FUN_518039b5(0x5181f888);
  }
  return (uint)bVar1;
}


