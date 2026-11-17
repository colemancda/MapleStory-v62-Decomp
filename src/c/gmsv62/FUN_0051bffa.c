/* FUN_0051bffa - 0x0051bffa in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0051bffa(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_0042452b();
  if (cVar1 == '\0') {
    iVar2 = 0x59;
    do {
      FUN_004b655e(param_2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  else {
    iVar2 = FUN_0047bbbd(param_1 + 4);
    if (iVar2 == 0) {
      FUN_0051c353();
    }
    FUN_0051c175();
  }
  FUN_0051c0f2();
  FUN_00879c20(param_1 + 0x1c1,param_1 + 4,0x1bd);
  FUN_0051c175();
  return;
}


