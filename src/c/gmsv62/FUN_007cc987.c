/* FUN_007cc987 - 0x007cc987 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_007cc987(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0042459a();
  iVar2 = FUN_0043f6fe();
  if (-1 < iVar2) {
    *(undefined4 *)(param_1 + 0x530) = 0xffffffff;
    FUN_00441501(1);
    (**(code **)(*(int *)(param_1 + 0x78) + 0x10))(6,100,0);
  }
  *(undefined4 *)(param_1 + 0x528) = 5000;
  if ((iVar1 == 0x2f9f6c) || (iVar1 == 0x4faa8c)) {
    uVar3 = FUN_0064d61f(iVar1);
    FUN_0079305e(uVar3,6,0,1);
    *(undefined4 *)(param_1 + 0x27d8) = 0;
  }
  else {
    FUN_00432942(*(undefined4 *)(param_1 + 0xd78));
  }
  return;
}


