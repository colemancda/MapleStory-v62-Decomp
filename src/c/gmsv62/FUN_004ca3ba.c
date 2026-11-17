/* FUN_004ca3ba - 0x004ca3ba in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004ca3ba(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int extraout_ECX;
  uint uVar6;
  int unaff_EBP;
  uint uVar7;
  
  FUN_00879bb8();
  uVar2 = *(undefined4 *)(DAT_00978368 + 0x2b40);
  uVar7 = *(uint *)(extraout_ECX + 0x2c);
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(DAT_00978368 + 0x2088);
  *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
LAB_004ca3e4:
  do {
    if (uVar7 == 0) {
LAB_004ca4e6:
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    iVar4 = *(int *)((-(uint)(uVar7 != 0) & uVar7 - 0x10) + 4);
    uVar6 = -(uint)(iVar4 != 0) & iVar4 + 0x10U;
    *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(uVar7 + 4);
    FUN_004cd4d5();
    iVar4 = *(int *)(unaff_EBP + -0x18);
    iVar1 = *(int *)(iVar4 + 0x30);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uVar7 = uVar6;
    if ((((iVar1 != 0) && (*(int *)(iVar4 + 0x48) == 3)) &&
        ((*(int *)(iVar4 + 0x2c) != 0 || (*(int *)(iVar4 + 0x24) == *(int *)(unaff_EBP + -0x10)))))
       && ((*(int *)(iVar4 + 0x2c) != 1 || (*(int *)(iVar4 + 0x24) == *(int *)(unaff_EBP + -0x14))))
       ) {
      uVar2 = FUN_0045e2eb();
      uVar3 = FUN_0045e2eb();
      iVar4 = (*DAT_0097b57c)(*(undefined4 *)(unaff_EBP + 8),uVar2,uVar3);
      if (iVar4 != 0) {
        uVar2 = *(undefined4 *)(unaff_EBP + -0x18);
        puVar5 = (undefined4 *)FUN_004cdd6f(0xffffffff);
        *puVar5 = uVar2;
      }
      if (**(int **)(unaff_EBP + 0xc) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(uint *)(**(int **)(unaff_EBP + 0xc) + -4);
      }
      if (*(uint *)(unaff_EBP + 0x10) <= uVar6) {
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + -0x18) != 0) {
          FUN_004cd5da(0);
        }
        goto LAB_004ca4e6;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        FUN_004cd5da(0);
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
      }
      goto LAB_004ca3e4;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (iVar4 != 0) {
      FUN_004cd5da(0);
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
    }
  } while( true );
}


