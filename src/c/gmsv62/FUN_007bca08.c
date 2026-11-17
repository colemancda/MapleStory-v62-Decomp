/* FUN_007bca08 - 0x007bca08 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007bca08(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined2 *puVar8;
  undefined4 uVar9;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = DAT_00978368;
  iVar3 = FUN_004becbc(1000,0);
  if (iVar3 != 0) {
    iVar3 = FUN_00455c59(unaff_EBP + -0x1c);
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(iVar3 + 4);
    FUN_0045e4a2();
    piVar5 = *(int **)(unaff_EBP + 8);
    iVar3 = FUN_00650dae(*(undefined4 *)(unaff_EBP + -0x10),*piVar5,0);
    if ((0 < iVar3) && ((*piVar5 / 1000) % 10 != 0)) {
      uVar4 = FUN_0043f6fe();
      if (0x7fffffff < uVar4) {
        piVar5 = (int *)FUN_00486ada(unaff_EBP + -0x14);
        iVar3 = *piVar5;
        piVar5 = *(int **)(unaff_EBP + -0x14);
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 8))(piVar5);
        }
        iVar6 = FUN_006158e9();
        if (iVar6 == 0) {
          iVar6 = FUN_00615923();
          if (iVar6 == 0) {
            if (*(int *)((-(uint)(iVar3 != 0) & iVar3 - 0xcU) + 0x110) == 0) {
              iVar3 = FUN_00614c6f();
              if (iVar3 == 0) goto LAB_007bcbbc;
            }
            FUN_0060142b(0x53,0,0);
            *(undefined4 *)(unaff_EBP + -4) = 0;
            uVar7 = FUN_007d1e08();
            FUN_00457d37(uVar7);
            FUN_00457d37(**(undefined4 **)(unaff_EBP + 8));
            FUN_00457cda(*(undefined4 *)(unaff_EBP + 0xc));
            puVar8 = (undefined2 *)(**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
            FUN_0045d247(*puVar8);
            iVar3 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
            FUN_0045d247(*(undefined2 *)(iVar3 + 4));
            FUN_004751b2(unaff_EBP + -0x2c);
            uVar7 = 1;
            *(undefined4 *)(iVar2 + 0x208c) = 1;
            uVar9 = FUN_007d1e08();
            *(undefined4 *)(iVar2 + 0x2090) = uVar9;
            *(undefined4 *)(extraout_ECX + 0x530) = 0x4a;
            (**(code **)(*(int *)(extraout_ECX + 0x78) + 0x10))(6,100,0);
            uVar9 = *(undefined4 *)(unaff_EBP + 0xc);
            uVar1 = *(undefined4 *)(unaff_EBP + 8);
            *(undefined4 *)(extraout_ECX + 0x528) = 5000;
            FUN_00790b31(uVar1,uVar9,6,0,0x7fffffff);
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            FUN_0045ebca();
            goto LAB_007bcbbe;
          }
        }
      }
    }
  }
LAB_007bcbbc:
  uVar7 = 0;
LAB_007bcbbe:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar7;
}


