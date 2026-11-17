/* FUN_004e6c7c - 0x004e6c7c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004e6c7c(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  size_t sVar4;
  undefined4 extraout_ECX;
  int iVar5;
  int unaff_EBP;
  int iVar6;
  int iVar7;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x28) = extraout_ECX;
  iVar7 = 0;
  while( true ) {
    puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x24,0x6d0);
    uVar2 = *puVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uVar2 = FUN_00434e21(unaff_EBP + -0x20,uVar2,iVar7);
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    FUN_00414f8b(uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00414ebb();
    FUN_00550c58(unaff_EBP + -0x18,*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + -0x1c)
                );
    pcVar3 = *(char **)(unaff_EBP + -0x18);
    if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) break;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iVar6 = 0;
    while( true ) {
      if (pcVar3 == (char *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(pcVar3 + -4);
      }
      if (iVar5 + -1 <= iVar6) break;
      if ((pcVar3[iVar6] == '\\') && (pcVar3[iVar6 + 1] == 'n')) {
        sVar4 = _strlen(&DAT_00964314);
        FUN_0045efbb(&DAT_00964314,sVar4);
        iVar6 = iVar6 + 1;
      }
      else {
        *(char *)(unaff_EBP + -0xd) = pcVar3[iVar6];
        FUN_0045efbb(unaff_EBP + -0xd,1);
      }
      pcVar3 = *(char **)(unaff_EBP + -0x18);
      iVar6 = iVar6 + 1;
    }
    iVar6 = unaff_EBP + -0x14;
    FUN_004655d4(0xffffffff);
    FUN_00414f8b(iVar6);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    iVar7 = iVar7 + 1;
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


