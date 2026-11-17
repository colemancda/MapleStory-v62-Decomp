/* FUN_007b3490 - 0x007b3490 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007b3490(int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined1 local_14 [16];
  
  iVar3 = (**(code **)(*param_1 + 4))();
  FUN_006f5b1a(local_14,&DAT_0097bfa8);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    piVar1 = *(int **)(iVar3 + 0x958);
    piVar4 = (int *)FUN_004c2648();
    if (*piVar4 == 0) {
      FUN_008324e4(0x14);
    }
    else {
      FUN_008320df(0x14);
      uVar5 = (**(code **)(*piVar1 + 8))();
      puVar6 = (undefined4 *)FUN_004c2648(uVar5);
      FUN_006ad95e(*puVar6,uVar5);
    }
  }
  FUN_006f5b1a(local_14,&DAT_0097bf98);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    iVar3 = param_1[0x936] + -1;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    param_1[0x936] = iVar3;
  }
  FUN_006f5512(&stack0x00000004,0x80);
  FUN_00798993();
  return;
}


