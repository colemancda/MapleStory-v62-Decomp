/* FUN_0077e207 - 0x0077e207 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0077e207(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *extraout_ECX;
  int unaff_EBP;
  char *pcVar4;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar2 = extraout_ECX[0x161];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    uVar1 = FUN_0076c5e7(unaff_EBP + -0x20,*(undefined4 *)(unaff_EBP + 8),
                         *(undefined4 *)(unaff_EBP + 0xc));
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414f8b(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
LAB_0077e2e2:
    FUN_00414ebb();
    pcVar4 = *(char **)(unaff_EBP + -0x10);
    if ((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) {
      iVar2 = (**(code **)(*extraout_ECX + 0x30))(pcVar4);
      iVar2 = iVar2 + 0x14 + *(int *)(unaff_EBP + 0xc);
      iVar3 = (**(code **)(*extraout_ECX + 0x2c))(iVar2);
      FUN_0074d755(iVar3 + 0x14 + *(int *)(unaff_EBP + 8),iVar2,pcVar4);
      goto LAB_0077e323;
    }
  }
  else {
    if (iVar2 == 1) {
      uVar1 = FUN_0076fafb(unaff_EBP + -0x1c,*(undefined4 *)(unaff_EBP + 8),
                           *(undefined4 *)(unaff_EBP + 0xc));
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00414f8b(uVar1);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      goto LAB_0077e2e2;
    }
    if (iVar2 == 2) {
      uVar1 = FUN_00772dca(unaff_EBP + -0x18,*(undefined4 *)(unaff_EBP + 8),
                           *(undefined4 *)(unaff_EBP + 0xc));
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00414f8b(uVar1);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      goto LAB_0077e2e2;
    }
    if (iVar2 == 4) {
      uVar1 = FUN_0077aa30(unaff_EBP + -0x14,*(undefined4 *)(unaff_EBP + 8),
                           *(undefined4 *)(unaff_EBP + 0xc));
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00414f8b(uVar1);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      goto LAB_0077e2e2;
    }
  }
  FUN_0074d6fb();
LAB_0077e323:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 1;
}


