/* FUN_004ea564 - 0x004ea564 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004ea564(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  int aiStack_34 [5];
  
  FUN_00879bb8();
  iVar1 = extraout_ECX + 500;
  do {
    aiStack_34[3] = 0x4ea582;
    aiStack_34[4] = iVar1;
    iVar3 = FUN_007ee8c1();
    if (iVar3 == 0) {
LAB_004ea60d:
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    aiStack_34[4] = 1;
    aiStack_34[2] = 0x4ea595;
    aiStack_34[3] = iVar1;
    iVar4 = FUN_007d1e11();
    iVar2 = aiStack_34[4];
    if (iVar4 != 0) {
      if (iVar3 != 0) {
        aiStack_34[4] = 0;
        aiStack_34[3] = 0;
        aiStack_34[2] = 0x72;
        aiStack_34[1] = 0x4ea5cf;
        FUN_0060142b();
        aiStack_34[4] = 2;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        aiStack_34[3] = 0x4ea5dc;
        FUN_00457cda();
        *(int **)(unaff_EBP + -0x10) = aiStack_34 + 4;
        aiStack_34[4] = 0;
        aiStack_34[2] = 0x4ea5ea;
        aiStack_34[3] = iVar1;
        FUN_00414f8b();
        aiStack_34[3] = 0x4ea5f2;
        FUN_00459cb5();
        aiStack_34[4] = unaff_EBP + -0x20;
        aiStack_34[3] = 0x4ea601;
        FUN_004751b2();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        aiStack_34[4] = 0x4ea60d;
        FUN_0045ebca();
      }
      goto LAB_004ea60d;
    }
    aiStack_34[4] = 0;
    aiStack_34[3] = 0;
    aiStack_34[2] = 0;
    aiStack_34[1] = 0;
    aiStack_34[0] = iVar2;
    *(int **)(unaff_EBP + -0x10) = aiStack_34;
    FUN_00679d22(aiStack_34,0x325);
    FUN_007db3ad();
  } while( true );
}


