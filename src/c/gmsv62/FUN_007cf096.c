/* FUN_007cf096 - 0x007cf096 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007cf096(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  bVar1 = FUN_0042452b();
  if (bVar1 < 3) {
    cVar2 = FUN_0042452b();
    if (cVar2 == '\0') {
      FUN_0078bf44(bVar1,0);
    }
    else {
      cVar2 = FUN_0042452b();
      *(uint *)(unaff_EBP + -0x10) = (uint)(cVar2 != '\0');
      if ((cVar2 != '\0') != 0) {
        FUN_0078bf44(bVar1,0);
      }
      iVar3 = FUN_004029b9(0x1c8);
      *(int *)(unaff_EBP + -0x10) = iVar3;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (iVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_0079518d();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_0078bf44(bVar1,uVar4);
      FUN_00613989(extraout_ECX,*(undefined4 *)(unaff_EBP + 8));
    }
    FUN_0043f1a0(1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


