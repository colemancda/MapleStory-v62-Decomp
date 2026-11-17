/* FUN_0056777d - 0x0056777d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0056777d(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  bool bVar4;
  int extraout_ECX;
  int unaff_EBP;
  int local_10;
  
  FUN_00879bb8();
  local_10 = *(int *)(unaff_EBP + 0x10);
  *(undefined4 *)(extraout_ECX + 0x2028) = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(extraout_ECX + 0x202c) = *(undefined4 *)(unaff_EBP + 0xc);
  FUN_0045e536();
  *(undefined1 *)(extraout_ECX + 0x2044) = *(undefined1 *)(unaff_EBP + 0x14);
  local_10 = unaff_EBP + 0x18;
  FUN_00414f8b();
  uVar1 = *(undefined1 *)(unaff_EBP + 0x1c);
  *(undefined4 *)(extraout_ECX + 0x205a) = *(undefined4 *)(unaff_EBP + 0x24);
  *(undefined4 *)(extraout_ECX + 0x205e) = *(undefined4 *)(unaff_EBP + 0x28);
  *(undefined4 *)(extraout_ECX + 0x2062) = *(undefined4 *)(unaff_EBP + 0x2c);
  *(undefined4 *)(extraout_ECX + 0x2066) = *(undefined4 *)(unaff_EBP + 0x30);
  *(undefined4 *)(extraout_ECX + 0x206a) = *(undefined4 *)(unaff_EBP + 0x34);
  *(undefined1 *)(extraout_ECX + 0x2045) = uVar1;
  uVar1 = *(undefined1 *)(unaff_EBP + 0x20);
  *(undefined4 *)(extraout_ECX + 0x206e) = *(undefined4 *)(unaff_EBP + 0x38);
  *(undefined1 *)(extraout_ECX + 0x2058) = uVar1;
  uVar2 = *(undefined4 *)(unaff_EBP + 0x44);
  *(undefined4 *)(extraout_ECX + 0x2072) = *(undefined4 *)(unaff_EBP + 0x3c);
  *(undefined4 *)(extraout_ECX + 0x207c) = uVar2;
  pcVar3 = *(char **)(unaff_EBP + 0x48);
  *(undefined4 *)(extraout_ECX + 0x2076) = *(undefined4 *)(unaff_EBP + 0x40);
  if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  *(uint *)(extraout_ECX + 0x2084) = (uint)!bVar4;
  local_10 = 0;
  *(int **)(unaff_EBP + 0x14) = &local_10;
  FUN_00414f8b(unaff_EBP + 0x48);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0056a74b();
  FUN_0056786b();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  local_10 = 0x56784e;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_10 = 0x56785a;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


