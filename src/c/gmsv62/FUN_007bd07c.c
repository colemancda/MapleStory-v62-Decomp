/* FUN_007bd07c - 0x007bd07c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007bd07c(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 *puVar6;
  int *piVar7;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x1c) = DAT_00978368;
  iVar2 = FUN_004becbc(300,0);
  if (iVar2 != 0) {
    iVar2 = FUN_00455c59(unaff_EBP + -0x14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
    FUN_0045e4a2();
    piVar7 = *(int **)(unaff_EBP + 8);
    iVar2 = FUN_00650dae(uVar3,*piVar7,0);
    if ((0 < iVar2) && ((*piVar7 / 1000) % 10 != 0)) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      FUN_00486ada(unaff_EBP + -0x18);
      piVar1 = *(int **)(unaff_EBP + -0x18);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      iVar2 = FUN_00653f4d(*(undefined4 *)(unaff_EBP + 0xc));
      if (iVar2 != 0) {
        iVar2 = FUN_0043f6fe();
        if (-1 < iVar2) goto LAB_007bd136;
        iVar2 = FUN_006158e9();
        if (iVar2 == 0) {
          iVar2 = FUN_00615923();
          if (iVar2 == 0) {
            iVar2 = _rand();
            iVar2 = FUN_00653ee7(*(undefined4 *)(unaff_EBP + 0xc),iVar2);
          }
          else {
            iVar2 = 0x2e;
          }
        }
        else {
          iVar2 = 0x2d;
        }
        *(int *)(extraout_ECX + 0x530) = iVar2;
        (**(code **)(*(int *)(extraout_ECX + 0x78) + 0x10))(6,100,0);
        iVar2 = *(int *)(extraout_ECX + 0x530);
        uVar4 = FUN_0043f6fe();
        piVar7 = *(int **)(unaff_EBP + 8);
        *(int *)(unaff_EBP + -0x10) =
             (((int *)(extraout_ECX + 0x78))[(uint)(uVar4 < 0x80000000) * 0xfd + 0x131] *
             (&DAT_00978688)[iVar2 * 6]) / (int)(&DAT_00978684)[iVar2 * 6];
      }
      if ((*piVar7 == 0x236a6e) && (*(int *)(unaff_EBP + 0x10) == 0)) {
        uVar3 = 1;
      }
      else {
        FUN_0060142b(0x53,0,0);
        *(undefined4 *)(unaff_EBP + -4) = 0;
        uVar3 = FUN_007d1e08();
        FUN_00457d37(uVar3);
        FUN_00457d37(*piVar7);
        FUN_00457cda(*(undefined4 *)(unaff_EBP + 0xc));
        if (*piVar7 == 0x3ee1ae) {
          FUN_00457d37(*(undefined4 *)(unaff_EBP + 0x1c));
        }
        if ((*(int *)(unaff_EBP + 0x10) != 0) &&
           (FUN_00457cda(*(undefined4 *)(unaff_EBP + 0x10)), *piVar7 == 0x234359)) {
          FUN_0045d247(*(undefined4 *)(unaff_EBP + -0x10));
        }
        iVar2 = *(int *)(unaff_EBP + 0x14);
        if ((-1 < iVar2) && (FUN_00457cda(iVar2), 0 < iVar2)) {
          puVar6 = *(undefined4 **)(unaff_EBP + 0x18);
          do {
            FUN_00457d37(*puVar6);
            puVar6 = puVar6 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        FUN_0045d247(*(undefined4 *)(unaff_EBP + -0x10));
        FUN_004751b2(unaff_EBP + -0x2c);
        iVar2 = *(int *)(unaff_EBP + -0x1c);
        uVar3 = 1;
        *(undefined4 *)(iVar2 + 0x208c) = 1;
        uVar5 = FUN_007d1e08();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        *(undefined4 *)(iVar2 + 0x2090) = uVar5;
        FUN_0045ebca();
      }
      goto LAB_007bd29f;
    }
  }
LAB_007bd136:
  uVar3 = 0;
LAB_007bd29f:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


