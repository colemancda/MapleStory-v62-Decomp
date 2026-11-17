/* FUN_0083a4ad - 0x0083a4ad in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0083a4ad(void)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = FUN_004becbc(200,0);
  iVar3 = DAT_00978358;
  if (iVar2 == 0) goto LAB_0083a68b;
  iVar2 = FUN_004cd670(DAT_00978358 + 0x1ef0,*(undefined4 *)(DAT_00978358 + 0x1ef8));
  if (((iVar2 != 0) || (*(int *)(iVar3 + 0x1e64) != 0)) || (0 < *(int *)(iVar3 + 0x528)))
  goto LAB_0083a68b;
  iVar3 = FUN_007a5c95();
  if (iVar3 == 0) goto LAB_0083a68b;
  iVar3 = FUN_0043fb62();
  if (iVar3 == 0) {
    iVar3 = FUN_0043fb93();
    if (iVar3 != 0) goto LAB_0083a655;
    iVar3 = FUN_007b3c5d();
    if (iVar3 != 0) goto LAB_0083a68b;
    piVar4 = (int *)FUN_00429303();
    if (piVar4 != (int *)0x0) {
      iVar3 = (**(code **)(*piVar4 + 0x1c))();
      if (iVar3 != 0x3d) {
        uVar1 = FUN_0045f03e(*(int *)(extraout_ECX + 0x2098) + 0x33,
                             *(undefined4 *)(*(int *)(extraout_ECX + 0x2098) + 0x35));
        uVar6 = *(undefined4 *)(unaff_EBP + 0xc);
        *(undefined1 *)(unaff_EBP + -0xd) = uVar1;
        iVar3 = FUN_00554db7(uVar6);
        if (iVar3 <= (int)(uint)*(byte *)(unaff_EBP + -0xd)) {
          FUN_0060142b(0x28,0,0);
          *(undefined4 *)(unaff_EBP + -4) = 2;
          FUN_00457d37(uVar6);
          FUN_004751b2(unaff_EBP + -0x24);
          *(undefined4 *)(extraout_ECX + 0x208c) = 1;
          uVar5 = FUN_007d1e08();
          *(undefined4 *)(extraout_ECX + 0x2090) = uVar5;
          FUN_0083a69c(uVar6);
          FUN_0079864f(uVar6);
          FUN_00486ada(unaff_EBP + 0xc);
          piVar4 = *(int **)(unaff_EBP + 0xc);
          if (piVar4 != (int *)0x0) {
            (**(code **)(*piVar4 + 8))(piVar4);
          }
          FUN_004e98b7(0xb);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_0045ebca();
        }
        goto LAB_0083a68b;
      }
    }
    uVar6 = FUN_00679d22(unaff_EBP + -0x14,0x105e);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_00471102(uVar6,0xc);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar3 = *(int *)(unaff_EBP + -0x14);
  }
  else {
LAB_0083a655:
    uVar6 = FUN_00679d22(unaff_EBP + -0x14,0xd8b);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00471102(uVar6,0xc);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar3 = *(int *)(unaff_EBP + -0x14);
  }
  if (iVar3 != 0) {
    FUN_00434e38(iVar3 + -0xc);
  }
LAB_0083a68b:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


