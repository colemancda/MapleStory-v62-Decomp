/* FUN_004a575b - 0x004a575b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_004a575b(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 *puVar4;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar2 = *(int *)(extraout_ECX + 0x84);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (((iVar2 == 0) || (*(char **)(unaff_EBP + 0xc) == (char *)0x0)) ||
     (**(char **)(unaff_EBP + 0xc) == '\0')) {
    puVar4 = *(undefined4 **)(unaff_EBP + 8);
    *puVar4 = 0;
    FUN_00414f8b(unaff_EBP + 0xc);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
  }
  else {
    uVar1 = (*DAT_0097b704)();
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar1;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    FUN_00414edd(&DAT_009645b0,0xffffffff);
    iVar2 = *(int *)(extraout_ECX + 0xb8);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if ((iVar2 != 0) &&
       (*(int *)(extraout_ECX + 0xbc) != *(int *)(unaff_EBP + -0x1c) &&
        -1 < *(int *)(extraout_ECX + 0xbc) - *(int *)(unaff_EBP + -0x1c))) {
      uVar1 = FUN_0045e053(unaff_EBP + -0x1c,*(undefined4 *)(extraout_ECX + 0x5c),
                           *(undefined4 *)(extraout_ECX + 0x48));
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00414f8b(uVar1);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00414ebb();
    }
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    while( true ) {
      if (*(int *)(unaff_EBP + 0xc) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(unaff_EBP + 0xc) + -4);
      }
      if (iVar2 <= *(int *)(unaff_EBP + -0x1c)) break;
      if (*(int *)(unaff_EBP + -0x1c) == *(int *)(extraout_ECX + 0x5c)) {
        piVar3 = (int *)(unaff_EBP + -0x14);
      }
      else {
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        FUN_00414edd(&DAT_009645b0,0xffffffff);
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 2;
        piVar3 = (int *)(unaff_EBP + -0x18);
        *(undefined1 *)(unaff_EBP + -4) = 5;
      }
      iVar2 = *piVar3;
      if (iVar2 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(iVar2 + -4);
      }
      FUN_0045efbb(iVar2,uVar1);
      *(undefined4 *)(unaff_EBP + -4) = 4;
      if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
        FUN_00414ebb();
      }
      *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
    }
    puVar4 = *(undefined4 **)(unaff_EBP + 8);
    *puVar4 = 0;
    FUN_00414f8b(unaff_EBP + -0x20);
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 1;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414ebb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar4;
}


