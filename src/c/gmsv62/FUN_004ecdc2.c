/* FUN_004ecdc2 - 0x004ecdc2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004ecdc2(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  cVar1 = FUN_0042452b();
  iVar2 = FUN_0042459a();
  *(int *)(unaff_EBP + 8) = iVar2;
  if (-1 < iVar2) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (cVar1 == '\0') {
      uVar3 = FUN_00679d22(unaff_EBP + -0x18,0x1007);
      *(undefined4 *)(unaff_EBP + -0x10) = 2;
      *(undefined4 *)(unaff_EBP + -4) = 2;
    }
    else {
      uVar3 = FUN_00679d22(unaff_EBP + -0x1c,0x1008);
      *(undefined4 *)(unaff_EBP + -0x10) = 1;
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
    FUN_00414f8b(uVar3);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
      FUN_00414ebb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
      FUN_00414ebb();
    }
    if (*(int *)(unaff_EBP + 8) == 0) {
      uVar3 = FUN_00679d22(unaff_EBP + 8,0x1009);
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 4;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00414f8b(uVar3);
    }
    else {
      FUN_00434e21(unaff_EBP + -0x14,*(undefined4 *)(unaff_EBP + -0x14),
                   *(undefined4 *)(unaff_EBP + 8));
    }
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if ((*(byte *)(unaff_EBP + -0x10) & 4) != 0) {
      FUN_00414ebb();
    }
    FUN_00471102(unaff_EBP + -0x14,0xc);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


