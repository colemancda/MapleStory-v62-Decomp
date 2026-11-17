/* FUN_004c948e - 0x004c948e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004c948e(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = DAT_00978368;
  iVar3 = **(int **)(unaff_EBP + 0xc);
  iVar1 = (*(int **)(unaff_EBP + 0xc))[1];
  *(int *)(unaff_EBP + -0x38) = iVar3 + -0x19;
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  *(int *)(unaff_EBP + -0x34) = iVar1 + -0x32;
  *(int *)(unaff_EBP + -0x30) = iVar3 + 0x19;
  *(int *)(unaff_EBP + -0x2c) = iVar1 + 10;
  uVar2 = FUN_007d1e08();
  iVar3 = *(int *)(extraout_ECX + 0x2c);
  *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
  if (iVar3 == 0) {
LAB_004c9687:
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
  iVar1 = *(int *)(unaff_EBP + 8);
  do {
    iVar4 = *(int *)((-(uint)(iVar3 != 0) & iVar3 - 0x10U) + 4);
    uVar2 = *(undefined4 *)(iVar3 + 4);
    *(uint *)(unaff_EBP + 8) = -(uint)(iVar4 != 0) & iVar4 + 0x10U;
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
    FUN_004cd4d5();
    iVar3 = *(int *)(*(int *)(unaff_EBP + -0x1c) + 0x88);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (((iVar3 == 0) || (iVar1 == 0)) ||
       ((*(int *)(*(int *)(unaff_EBP + -0x1c) + 0x30) == 0 &&
        (((iVar3 = FUN_004cd670(iVar1 + 0x124,*(undefined4 *)(iVar1 + 300)), iVar3 == 0 &&
          (iVar3 = FUN_004cd670(iVar1 + 0x130,*(undefined4 *)(iVar1 + 0x138)), iVar3 == 0)) ||
         (iVar3 = FUN_005545a2(*(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x34)), iVar3 != 0)))))
       ) {
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_004cd4f2();
    }
    else {
      iVar4 = FUN_004cd670(iVar1 + 0x130,*(undefined4 *)(iVar1 + 0x138));
      iVar3 = *(int *)(unaff_EBP + -0x1c);
      if ((((iVar4 == 0) || (*(int *)(unaff_EBP + -0x10) - *(int *)(iVar3 + 0x40) < 0x3a99)) &&
          ((*(int *)(iVar3 + 0x28) != 0 &&
           (((*(int *)(iVar3 + 0x2c) == 0 &&
             (*(int *)(iVar3 + 0x24) != *(int *)(*(int *)(unaff_EBP + -0x14) + 0x2088))) ||
            ((*(int *)(iVar3 + 0x2c) == 1 &&
             (*(int *)(iVar3 + 0x24) != *(int *)(*(int *)(unaff_EBP + -0x14) + 0x2b40))))))))) ||
         (((*(char *)(iVar3 + 0x1d) == '\0' || (*(int *)(iVar3 + 0x48) != 3)) ||
          (*(int *)(unaff_EBP + -0x10) - *(int *)(iVar3 + 0x54) < 3000)))) {
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      }
      else {
        uVar2 = FUN_0045e2eb();
        *(undefined4 *)(unaff_EBP + -0x28) = uVar2;
        uVar2 = FUN_0045e2eb();
        iVar3 = (*DAT_0097b57c)(unaff_EBP + -0x38,*(undefined4 *)(unaff_EBP + -0x28),uVar2);
        if (iVar3 != 0) {
          if (*(int *)(*(int *)(unaff_EBP + -0x1c) + 0x30) == 0) {
            uVar2 = *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x34);
          }
          else {
            uVar2 = 0x7fffffff;
          }
          iVar3 = FUN_004cd1dd(uVar2);
          if (iVar3 == 0) {
            FUN_006161c8(*(undefined4 *)(unaff_EBP + 0xc),
                         *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x20));
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x54) = *(undefined4 *)(unaff_EBP + -0x10)
            ;
            if (*(int *)(unaff_EBP + -0x1c) != 0) {
              FUN_004cd5da(0);
            }
            goto LAB_004c9687;
          }
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar3 = *(int *)(unaff_EBP + -0x1c);
      }
      if (iVar3 != 0) {
        FUN_004cd5da(0);
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      }
    }
    if (*(int *)(unaff_EBP + 8) == 0) goto LAB_004c9687;
    iVar3 = *(int *)(unaff_EBP + 8);
  } while( true );
}


