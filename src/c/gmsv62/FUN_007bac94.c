/* FUN_007bac94 - 0x007bac94 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007bac94(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar5 = DAT_00978368;
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
  iVar3 = FUN_004becbc(300,0);
  if (iVar3 != 0) {
    iVar3 = FUN_00455c59(unaff_EBP + -0x20);
    uVar5 = *(undefined4 *)(iVar3 + 4);
    FUN_0045e4a2();
    piVar1 = *(int **)(unaff_EBP + 8);
    iVar3 = FUN_00650dae(uVar5,*piVar1,0);
    if ((0 < iVar3) && ((*piVar1 / 1000) % 10 != 0)) {
      *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x10) + 0x78;
      uVar4 = FUN_0043f6fe();
      if (0x7fffffff < uVar4) {
        FUN_00486ada(unaff_EBP + 8);
        piVar2 = *(int **)(unaff_EBP + 8);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
        }
        iVar3 = FUN_006158e9();
        if (iVar3 == 0) {
          iVar3 = FUN_00615923();
          if (iVar3 == 0) {
            FUN_0060142b(0x53,0,0);
            *(undefined4 *)(unaff_EBP + -4) = 0;
            uVar5 = FUN_007d1e08();
            FUN_00457d37(uVar5);
            FUN_00457d37(*piVar1);
            FUN_00457cda(*(undefined4 *)(unaff_EBP + 0xc));
            uVar5 = FUN_007bd3c9(piVar1,*(undefined4 *)(unaff_EBP + 0xc),unaff_EBP + -0x14);
            FUN_00457cda(uVar5);
            FUN_0045d247(0);
            iVar3 = *(int *)(unaff_EBP + -0x18);
            *(undefined4 *)(iVar3 + 0x208c) = 1;
            uVar5 = FUN_007d1e08();
            *(undefined4 *)(iVar3 + 0x2090) = uVar5;
            FUN_004751b2(unaff_EBP + -0x30);
            iVar3 = *(int *)(unaff_EBP + -0x10);
            FUN_00790b31(piVar1,*(undefined4 *)(unaff_EBP + 0xc),6,0,0x7fffffff);
            iVar6 = FUN_007ab174(piVar1,*(undefined4 *)(unaff_EBP + 0xc),
                                 *(undefined4 *)(unaff_EBP + -0x14),0);
            if (iVar6 == 0) {
              iVar6 = FUN_00653f4d(*(undefined4 *)(unaff_EBP + 0xc));
              if (iVar6 != 0) {
                iVar6 = _rand();
                uVar5 = FUN_00653ee7(*(undefined4 *)(unaff_EBP + 0xc),iVar6);
                piVar1 = *(int **)(unaff_EBP + -0x1c);
                *(undefined4 *)(iVar3 + 0x530) = uVar5;
                (**(code **)(*piVar1 + 0x10))(6,100,0);
              }
            }
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            FUN_0045ebca();
            uVar5 = 1;
            goto LAB_007bae52;
          }
        }
      }
    }
  }
  uVar5 = 0;
LAB_007bae52:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}


