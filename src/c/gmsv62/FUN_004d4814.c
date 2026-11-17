/* FUN_004d4814 - 0x004d4814 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004d4814(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int local_c;
  undefined4 local_8;
  
  uVar1 = param_2;
  param_2 = FUN_0042459a();
  local_8 = param_2;
  iVar2 = FUN_004371d2(&local_8,&local_c);
  if ((iVar2 == 0) || (local_c == 0)) {
    iVar2 = FUN_004d4c56();
    uVar3 = FUN_0042459a();
    uVar3 = FUN_004d6990(uVar3);
    uVar3 = FUN_004d148f(param_2,uVar3);
    FUN_004d49a2(uVar3);
    *(undefined1 *)(iVar2 + 0x18) = 1;
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(param_1 + 0x2c);
    FUN_004d4ac9(&param_2,(undefined4 *)(iVar2 + 0x14));
    FUN_004d1725(uVar1);
    FUN_004d1a40(uVar1);
  }
  else {
    *(byte *)(local_c + 0x18) = *(byte *)(local_c + 0x18) | 1;
  }
  return;
}


