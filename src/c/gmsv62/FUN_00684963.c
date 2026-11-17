/* FUN_00684963 - 0x00684963 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00684963(void)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int extraout_ECX;
  uint uVar4;
  int unaff_EBP;
  undefined1 auStack_38 [8];
  undefined4 uStack_30;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0xc) != 0) {
    uVar1 = *(uint *)(extraout_ECX + 0x10);
    while (uVar1 != 0) {
      iVar3 = *(int *)((-(uint)(uVar1 != 0) & uVar1 - 0x10) + 4);
      uVar4 = -(uint)(iVar3 != 0) & iVar3 + 0x10U;
      iVar3 = *(int *)(uVar1 + 4);
      *(int *)(unaff_EBP + -0x14) = iVar3;
      if (iVar3 != 0) {
        uStack_30 = 0x6849bd;
        InterlockedIncrement((LONG *)(iVar3 + 4));
      }
      *(undefined4 *)(unaff_EBP + -4) = 0;
      *(undefined1 **)(unaff_EBP + -0x10) = auStack_38;
      FUN_006f5512(unaff_EBP + 0x10,0x80);
      FUN_006f5dd4(unaff_EBP + -0x28);
      uStack_30 = 0x6849ec;
      FUN_0068686b();
      uStack_30 = 0x6849f6;
      FUN_006f5ab7();
      if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0x1c) == 3) {
        if ((*(int *)(unaff_EBP + 8) == 3) &&
           (*(int *)(*(int *)(unaff_EBP + -0x14) + 0x20) == *(int *)(unaff_EBP + 0xc))) {
LAB_00684a30:
          uStack_30 = 0x684a39;
          FUN_006869a6();
        }
      }
      else {
        cVar2 = FUN_006f5bb6();
        if (cVar2 != '\0') {
          uStack_30 = 0x684a2c;
          iVar3 = FUN_006f563a();
          if (iVar3 == 0) goto LAB_00684a30;
        }
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      uVar1 = uVar4;
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        uStack_30 = 0x684a4d;
        FUN_006868f7();
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
      }
    }
    FUN_00684df7();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


