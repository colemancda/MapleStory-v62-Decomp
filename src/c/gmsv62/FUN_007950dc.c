/* FUN_007950dc - 0x007950dc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007950dc(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  cVar1 = FUN_0042452b();
  bVar2 = FUN_0042452b();
  if (bVar2 < 3) {
    if (cVar1 == '\0') {
      FUN_0078bf44(bVar2,0);
    }
    iVar3 = FUN_004029b9(0x1c8);
    *(int *)(unaff_EBP + -0x10) = iVar3;
    uVar4 = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar3 != 0) {
      uVar4 = FUN_0079518d();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0078bf44(bVar2,uVar4);
    FUN_00613989(extraout_ECX,*(undefined4 *)(unaff_EBP + 8));
    iVar3 = (**(code **)(*extraout_ECX + 8))();
    if (iVar3 != 0) {
      FUN_0061636f();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


