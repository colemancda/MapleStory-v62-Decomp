/* FUN_005cee94 - 0x005cee94 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_005cee94(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int unaff_EBP;
  int iVar6;
  
  FUN_00879bb8();
  iVar3 = FUN_007d1e08();
  iVar1 = *(int *)(unaff_EBP + 8);
  piVar4 = *(int **)(extraout_ECX + 0x438);
  do {
    piVar2 = piVar4;
    iVar6 = iVar3;
    if (piVar2 == (int *)0x0) goto LAB_005ceef6;
    iVar6 = *(int *)((-(uint)(piVar2 != (int *)0x0) & (uint)(piVar2 + -4)) + 4);
    piVar4 = (int *)(iVar6 + 0x10U & -(uint)(iVar6 != 0));
  } while (*piVar2 != iVar1);
  iVar6 = piVar2[1];
  if (iVar3 - iVar6 < 3000) {
    uVar5 = 0;
  }
  else {
    if (piVar4 == (int *)0x0) {
LAB_005ceef6:
      piVar4 = (int *)FUN_005d1c75();
      *piVar4 = iVar1;
      piVar4[1] = iVar6;
    }
    FUN_0060142b(0x9f,0,0);
    uVar5 = *(undefined4 *)(extraout_ECX + 0x158);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uVar5 = FUN_004b8c9b(extraout_ECX + 0x150,uVar5);
    FUN_00457d37(uVar5);
    FUN_00457d37(iVar1);
    FUN_004751b2(unaff_EBP + -0x1c);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0045ebca();
    uVar5 = 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}


