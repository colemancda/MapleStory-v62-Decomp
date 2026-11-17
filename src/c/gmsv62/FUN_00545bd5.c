/* FUN_00545bd5 - 0x00545bd5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00545bd5(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  int unaff_EBP;
  int aiStack_28 [2];
  
  FUN_00879bb8();
  if (*(int *)(*(int *)(extraout_ECX + 0x194) + 0x68) == 5) {
    aiStack_28[1] = 0;
    aiStack_28[0] = 0x545c01;
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x6c) + 4) + 0x24))();
  }
  else {
    aiStack_28[1] = 1;
    aiStack_28[0] = 0x545c14;
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x6c) + 4) + 0x24))();
    iVar2 = (*(int *)(*(int *)(extraout_ECX + 0x194) + 0x58) + 0xf) / 0x10;
    aiStack_28[0] = 1;
    *(int *)(unaff_EBP + -0x14) = iVar2;
    FUN_004ae18f(iVar2,10,1);
    iVar2 = 0;
    if (0 < *(int *)(unaff_EBP + -0x14)) {
      do {
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        aiStack_28[0] = 0x3bc;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x18);
        uVar1 = *puVar3;
        aiStack_28[0] = iVar2 + 1;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        *(int *)(unaff_EBP + -0x1c) = aiStack_28[0];
        FUN_00434e21(unaff_EBP + -0x10,uVar1);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        aiStack_28[0] = 0x545c7f;
        FUN_00414ebb();
        *(int **)(unaff_EBP + -0x20) = aiStack_28;
        aiStack_28[0] = 0;
        FUN_00414f8b(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00495c22(iVar2);
        FUN_004ae1d9(iVar2);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        aiStack_28[0] = 0x545caf;
        FUN_00414ebb();
        iVar2 = *(int *)(unaff_EBP + -0x1c);
      } while (iVar2 < *(int *)(unaff_EBP + -0x14));
    }
    aiStack_28[0] = 0x545cbf;
    thunk_FUN_004aea12();
    aiStack_28[0] = *(int *)(*(int *)(extraout_ECX + 0x194) + 0x70);
    FUN_004ae16e();
  }
  aiStack_28[0] = 0x545cd7;
  FUN_00545cee();
  aiStack_28[0] = 0;
  FUN_008161f1();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


