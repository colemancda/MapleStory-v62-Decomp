/* ptr_008553f6 - 0x008553f6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_008553f6(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  
  iVar1 = FUN_0042459a();
  if (iVar1 == *(int *)(unaff_EBX + 0x2cac)) {
    uVar2 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x20) = uVar2;
    uVar2 = FUN_0045cdbc(unaff_EBP + -0xac);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    FUN_00414f8b(uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0xac) != 0) {
      FUN_00434e38(*(int *)(unaff_EBP + -0xac) + -0xc);
    }
    if (*(int *)(unaff_EBX + 0x2088) == *(int *)(unaff_EBP + -0x20)) {
      if (unaff_EDI != 0x2f) {
        uVar2 = FUN_00679d22(unaff_EBP + -100,0x162);
        *(undefined4 *)(unaff_EBP + -0x18) = 2;
        *(undefined4 *)(unaff_EBP + -4) = 0x23;
      }
      else {
        uVar2 = FUN_00679d22(unaff_EBP + -0xd4,0x161);
        *(undefined4 *)(unaff_EBP + -0x18) = 1;
        *(undefined1 *)(unaff_EBP + -4) = 0x22;
      }
      FUN_00414f8b(uVar2);
      *(undefined4 *)(unaff_EBP + -4) = 0x22;
      if ((*(byte *)(unaff_EBP + -0x18) & 2) != 0) {
        *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffffd;
        if (*(int *)(unaff_EBP + -100) != 0) {
          FUN_00434e38(*(int *)(unaff_EBP + -100) + -0xc);
        }
      }
      *(undefined4 *)(unaff_EBP + -4) = 1;
      if (((*(byte *)(unaff_EBP + -0x18) & 1) != 0) && (*(int *)(unaff_EBP + -0xd4) != 0)) {
        FUN_00434e38(*(int *)(unaff_EBP + -0xd4) + -0xc);
      }
      FUN_0082f8bf();
      if (DAT_0097befc != 0) {
        FUN_00815de9();
        if (DAT_0097befc != 0) {
          (*(code *)**(undefined4 **)(DAT_0097befc + 8))(1);
        }
      }
    }
    else {
      FUN_00856688(*(int *)(unaff_EBP + -0x20));
      iVar1 = FUN_004a3109(&DAT_00978474);
      if (iVar1 == 0) {
        uVar2 = FUN_00679d22(unaff_EBP + -0x6c,0x164);
        *(undefined1 *)(unaff_EBP + -4) = 0x24;
        FUN_00414f8b(uVar2);
        iVar1 = *(int *)(unaff_EBP + -0x6c);
        *(undefined1 *)(unaff_EBP + -4) = 1;
      }
      else if (unaff_EDI != 0x2f) {
        puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x74,0x165);
        uVar2 = *puVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        FUN_00434e21(unaff_EBP + 8,uVar2,*(undefined4 *)(unaff_EBP + -0x14));
        iVar1 = *(int *)(unaff_EBP + -0x74);
        *(undefined1 *)(unaff_EBP + -4) = 1;
      }
      else {
        puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0xb4,0x163);
        uVar2 = *puVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0x25;
        FUN_00434e21(unaff_EBP + 8,uVar2,*(undefined4 *)(unaff_EBP + -0x14));
        iVar1 = *(int *)(unaff_EBP + -0xb4);
        *(undefined1 *)(unaff_EBP + -4) = 1;
      }
      if (iVar1 != 0) {
        FUN_00434e38(iVar1 + -0xc);
      }
    }
    FUN_00471102(unaff_EBP + 8,0xc);
    if ((DAT_0097bef4 != 0) && (*(int *)(DAT_0097bef4 + 0x588) == 2)) {
      FUN_0077e45e();
    }
    if (DAT_00978358 != 0) {
      FUN_007b02be();
    }
    if ((DAT_0097bef4 != 0) && (*(int *)(DAT_0097bef4 + 0x588) == 3)) {
      FUN_0077e45e();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
  }
  else {
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + 8) != 0) {
      FUN_00434e38(*(int *)(unaff_EBP + 8) + -0xc);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      FUN_00434e38(*(int *)(unaff_EBP + -0x14) + -0xc);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


