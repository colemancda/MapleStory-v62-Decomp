/* FUN_00817ef6 - 0x00817ef6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00817ef6(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = DAT_0097c274;
  while (piVar3 != (int *)0x0) {
    iVar1 = *piVar3;
    iVar2 = *(int *)((-(uint)(piVar3 != (int *)0x0) & (uint)(piVar3 + -4)) + 4);
    piVar3 = (int *)(-(uint)(iVar2 != 0) & iVar2 + 0x10U);
    if ((iVar1 != param_1) && (FUN_00815de9(), iVar1 != 0)) {
      (*(code *)**(undefined4 **)(iVar1 + 8))(1);
    }
  }
  FUN_00815de9();
  if (param_1 != 0) {
    (*(code *)**(undefined4 **)(param_1 + 8))(1);
  }
  FUN_0081982a();
  FUN_0081982a();
  return;
}


