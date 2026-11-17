/* FUN_00614d2e - 0x00614d2e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00614d2e(void)

{
  int iVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  
  FUN_00879bb8();
  iVar1 = *(int *)(extraout_ECX + 0x84);
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x524) == 0)) {
    uStack_18 = 0x614d5d;
    cVar2 = FUN_0042452b();
    uStack_18 = 0x614d67;
    cVar3 = FUN_0042452b();
    uStack_18 = unaff_EBP + 8;
    uStack_1c = 0x614d75;
    FUN_0045cdbc();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uStack_18 = 0x614d80;
    uStack_18 = FUN_0042452b();
    uStack_18 = uStack_18 & 0xff;
    uStack_1c = 0;
    uStack_20 = 0x614d8e;
    uVar4 = FUN_00449713();
    *(undefined4 **)(unaff_EBP + -0x14) = &uStack_20;
    FUN_00448a17(uVar4);
    FUN_00615b8e((int)cVar2,(int)cVar3);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uStack_18 = 0x614db0;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


