/* FUN_008707a0 - 0x008707a0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_008707a0(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  HMODULE pHVar4;
  uint uVar5;
  
  pHVar4 = GetModuleHandleA((LPCSTR)0x0);
  if ((short)pHVar4->unused == 0x5a4d) {
    if (((pHVar4[0xd].unused != 0) && (pHVar4[0xe].unused != 0)) &&
       (DAT_0097fb5c = 1, pHVar4[0xc].unused == 0)) {
      DAT_0097fb5d = 1;
    }
    uVar1 = pHVar4[0xe].unused;
    if (((uVar1 != 0) && (uVar2 = pHVar4[0xd].unused, uVar2 != 0)) &&
       (uVar3 = pHVar4[0xc].unused, uVar3 != 0)) {
      if (uVar1 < uVar2) {
        uVar5 = uVar2 - uVar1;
      }
      else {
        uVar5 = uVar1 - uVar2;
      }
      if ((uVar3 == uVar5) || ((uVar2 == uVar1 && (uVar3 == uVar2)))) {
        DAT_0097fb5d = 1;
      }
    }
  }
  return;
}


