/* FUN_0075ea16 - 0x0075ea16 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0075ea16(void)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  int iVar7;
  uint uVar8;
  
  FUN_00879bb8();
  piVar1 = *(int **)(unaff_EBP + 8);
  FUN_00495ba8();
  *(int *)(unaff_EBP + -0x14) = DAT_00973a94 + 300;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX + 0x7c;
  FUN_00445a30();
  pcVar2 = (char *)*piVar1;
  if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
    iVar7 = 0;
    while( true ) {
      iVar3 = *piVar1;
      if (iVar3 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(iVar3 + -4);
      }
      if (iVar5 <= iVar7) break;
      if (*(char *)(iVar3 + iVar7) != ' ') {
        *(char *)(unaff_EBP + 0xb) = *(char *)(iVar3 + iVar7);
        FUN_0045efbb(unaff_EBP + 0xb,1);
      }
      iVar7 = iVar7 + 1;
    }
  }
  if ((*(char **)(unaff_EBP + -0x10) != (char *)0x0) && (**(char **)(unaff_EBP + -0x10) != '\0')) {
    uVar8 = *(uint *)(*(int *)(unaff_EBP + -0x14) + 0xc);
    while (uVar8 != 0) {
      iVar7 = *(int *)((-(uint)(uVar8 != 0) & uVar8 - 0x10) + 4);
      uVar6 = -(uint)(iVar7 != 0) & iVar7 + 0x10U;
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(uVar8 + 4);
      FUN_0055992e();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00495ba8();
      iVar7 = FUN_004538dc(*(undefined4 *)(unaff_EBP + -0x10),0,1);
      if (-1 < iVar7) {
        iVar7 = FUN_005539ff(*(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 4));
        if (iVar7 != 0) {
          iVar7 = *(int *)(unaff_EBP + -0x14);
          puVar4 = (undefined4 *)FUN_0045f1e3(0xffffffff);
          *puVar4 = *(undefined4 *)(iVar7 + 4);
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      uVar8 = uVar6;
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        FUN_005598ff(0);
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
      }
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


