/* ptr_0055ea62 - 0x0055ea62 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_0055ea62(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    iVar1 = FUN_0055f233();
    if (iVar1 == 0) {
      return;
    }
    iVar1 = *param_1;
    uVar2 = 1;
  }
  else {
    if (param_2 != 2) {
      return;
    }
    iVar1 = *param_1;
    uVar2 = 2;
  }
  (**(code **)(iVar1 + 0x34))(uVar2);
  return;
}


