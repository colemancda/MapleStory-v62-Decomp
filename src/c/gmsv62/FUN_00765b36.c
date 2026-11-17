/* FUN_00765b36 - 0x00765b36 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00765b36(void)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_EBP;
  int iVar6;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  FUN_00879bb8();
  iVar5 = 0;
  if (*(int *)(unaff_EBP + 8) != 0) {
    do {
      iStack_1c = 0x765b5b;
      uVar3 = FUN_0042459a();
      iStack_1c = unaff_EBP + 8;
      uStack_20 = 0x765b68;
      FUN_0045cdbc();
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iStack_1c = 0x765b73;
      uVar1 = FUN_0042452b();
      *(undefined1 *)(unaff_EBP + -0x18) = uVar1;
      iStack_1c = 0x765b7d;
      uVar4 = FUN_00424561();
      *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
      iStack_1c = 0x765b87;
      uVar1 = FUN_0042452b();
      *(undefined1 *)(unaff_EBP + -0x10) = uVar1;
      iStack_1c = 0x765b91;
      uVar4 = FUN_00424561();
      *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
      iStack_1c = 0x765b9b;
      iStack_1c = FUN_0042459a();
      uStack_20 = *(undefined4 *)(unaff_EBP + 0xc);
      uStack_24 = *(undefined4 *)(unaff_EBP + -0x10);
      uStack_28 = *(undefined4 *)(unaff_EBP + -0x14);
      uStack_2c = *(undefined4 *)(unaff_EBP + -0x18);
      *(undefined1 **)(unaff_EBP + 0xc) = auStack_30;
      FUN_00450368(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar6 = iVar5;
      FUN_00766aa2(iVar5,uVar3);
      FUN_00765a9f(iVar6,uVar3);
      iVar5 = iVar5 + 1;
      iStack_1c = 0x765bd1;
      cVar2 = FUN_0042452b();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iStack_1c = 0x765be0;
      FUN_00414ebb();
    } while (cVar2 != '\0');
    iStack_1c = 1;
    uStack_20 = 0x765bf5;
    FUN_007621bc();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


