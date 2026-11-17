/* FUN_007987ed - 0x007987ed in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007987ed(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int unaff_EBP;
  undefined4 uStack_44;
  int iStack_40;
  int *piStack_3c;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x524) == 0) {
    iVar2 = FUN_00429303();
    if (iVar2 != 0) {
      piStack_3c = (int *)0x798827;
      FUN_0079896f();
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if ((*(short **)(unaff_EBP + -0x10) != (short *)0x0) && (**(short **)(unaff_EBP + -0x10) != 0)
         ) {
        piStack_3c = (int *)0x798847;
        iVar2 = FUN_0079b949();
        uVar3 = FUN_004f162d();
        *(undefined4 *)(iVar2 + 8) = uVar3;
        piStack_3c = (int *)(iVar2 + 0xc);
        iStack_40 = 0x798868;
        FUN_00424e27();
        iStack_40 = 0x79886f;
        iStack_40 = FUN_0043210d();
        uStack_44 = 0x798878;
        uVar3 = FUN_00411641();
        *(undefined4 **)(unaff_EBP + -0x14) = &uStack_44;
        uStack_44 = extraout_ECX_00;
        FUN_004033a1(uVar3);
        iVar4 = FUN_0079be1e();
        if (iVar4 != 0) {
          piStack_3c = (int *)0x79889f;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
          piStack_3c = (int *)(unaff_EBP + -0x34);
          iStack_40 = 0x7988ae;
          iVar4 = FUN_00402e32();
          if (iVar4 < 0) {
            piStack_3c = (int *)0x7988ba;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 1;
          piStack_3c = (int *)0x7988c4;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
          piStack_3c = (int *)(unaff_EBP + -0x24);
          iStack_40 = 0x7988ce;
          iVar4 = FUN_00402e32();
          if (iVar4 < 0) {
            piStack_3c = (int *)0x7988da;
            FUN_00878dfb();
          }
          iVar4 = *(int *)(iVar2 + 0x14);
          *(undefined1 *)(unaff_EBP + -4) = 2;
          if (iVar4 == 0) {
            piStack_3c = (int *)0x7988ee;
            FUN_00878dfb();
          }
          piVar1 = *(int **)(iVar2 + 0x14);
          uStack_44 = *(undefined4 *)(unaff_EBP + -0x34);
          iStack_40 = *(int *)(unaff_EBP + -0x30);
          piStack_3c = *(int **)(unaff_EBP + -0x2c);
          iVar2 = (**(code **)(*piVar1 + 0x110))
                            (piVar1,0x20,*(undefined4 *)(unaff_EBP + -0x24),
                             *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                             *(undefined4 *)(unaff_EBP + -0x18));
          if (iVar2 < 0) {
            uStack_44 = 0x798924;
            iStack_40 = iVar2;
            piStack_3c = piVar1;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 1;
          piStack_3c = (int *)0x798931;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_3c = (int *)0x79893c;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          piStack_3c = (int *)0x798949;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_3c = (int *)0x798954;
            FUN_00878dfb();
          }
        }
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00402676();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


