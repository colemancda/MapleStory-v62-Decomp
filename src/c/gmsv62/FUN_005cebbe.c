/* FUN_005cebbe - 0x005cebbe in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005cebbe(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = FUN_004cd670(*(int *)(extraout_ECX + 0x15c) + 0x158,
                       *(undefined4 *)(*(int *)(extraout_ECX + 0x15c) + 0x160));
  if (((iVar1 != 0) &&
      (iVar1 = FUN_004cd670(*(int *)(extraout_ECX + 0x15c) + 0x164,
                            *(undefined4 *)(*(int *)(extraout_ECX + 0x15c) + 0x16c)), iVar1 != 0))
     && ((*(uint *)(DAT_00978358 + 0x52c) & 0xfffffffe) != 0x12)) {
    FUN_0043f3d6(unaff_EBP + -0x34,0);
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    do {
      if ((*(int *)(extraout_ECX + 0x274) == 0) ||
         (iVar1 = *(int *)(extraout_ECX + 0x160), iVar1 == 0)) {
        iVar1 = *(int *)(extraout_ECX + 0x15c);
      }
      if (*(int *)(iVar1 + 0x1e8) <= *(int *)(unaff_EBP + -0x10)) break;
      iVar1 = FUN_004e67c9(*(undefined4 *)(unaff_EBP + -0x10));
      if (*(int *)(iVar1 + 0xc) == 0) {
        iVar2 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
        *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(iVar2 + 4);
        puVar3 = (undefined4 *)(**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
        uVar5 = *puVar3;
        uVar4 = FUN_00411537(unaff_EBP + -0x44,iVar1 + 0x28);
        (*DAT_0097b54c)(uVar4,uVar5,*(undefined4 *)(unaff_EBP + -0x14));
        iVar1 = (*DAT_0097b5a0)(unaff_EBP + -0x54,unaff_EBP + -0x44,unaff_EBP + -0x34);
        if (iVar1 != 0) goto LAB_005cecdc;
      }
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    } while( true );
  }
LAB_005ced28:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
LAB_005cecdc:
  FUN_0060142b(0xa2,0,0);
  uVar5 = *(undefined4 *)(extraout_ECX + 0x158);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar5 = FUN_004b8c9b(extraout_ECX + 0x150,uVar5);
  FUN_00457d37(uVar5);
  FUN_004751b2(unaff_EBP + -0x24);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0045ebca();
  goto LAB_005ced28;
}


