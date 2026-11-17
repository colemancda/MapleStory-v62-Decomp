/* FUN_00706155 - 0x00706155 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00706155(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  char cVar7;
  int extraout_ECX;
  char *pcVar8;
  int unaff_EBP;
  undefined4 *puVar9;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 4) == 0) {
    iVar5 = *(int *)(extraout_ECX + 8);
  }
  else {
    if (*(uint *)(extraout_ECX + 0xc) <= *(uint *)(extraout_ECX + 0x14)) goto LAB_0070618e;
    iVar5 = *(int *)(extraout_ECX + 8) * 2 + 1;
  }
  if (iVar5 != 0) {
    FUN_00707b43(iVar5,0);
  }
LAB_0070618e:
  pcVar8 = (char *)**(undefined4 **)(unaff_EBP + 8);
  uVar4 = 0;
  if (pcVar8 != (char *)0x0) {
    cVar7 = *pcVar8;
    while (cVar7 != '\0') {
      pcVar8 = pcVar8 + 1;
      uVar4 = uVar4 * 0x20 + 1 + (int)cVar7;
      cVar7 = *pcVar8;
    }
  }
  uVar4 = uVar4 % *(uint *)(extraout_ECX + 8);
  puVar6 = *(undefined4 **)(*(int *)(extraout_ECX + 4) + uVar4 * 4);
  puVar9 = (undefined4 *)(*(int *)(extraout_ECX + 4) + uVar4 * 4);
  *(undefined4 **)(unaff_EBP + -0x10) = puVar9;
  do {
    if (puVar6 == (undefined4 *)0x0) {
      *(int *)(extraout_ECX + 0xc) = *(int *)(extraout_ECX + 0xc) + 1;
      puVar6 = (undefined4 *)FUN_00707c0e();
      *(undefined4 **)(unaff_EBP + -0x14) = puVar6;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        uVar1 = *puVar9;
        *puVar6 = &PTR_LAB_008f07ac;
        uVar2 = *(undefined4 *)(unaff_EBP + 8);
        puVar6[1] = uVar1;
        puVar6[2] = 0;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_00414f8b(uVar2);
        *puVar6 = &PTR_FUN_008f07a8;
      }
      puVar3 = *(undefined4 **)(unaff_EBP + 0xc);
      if (puVar3 != (undefined4 *)0x0) {
        puVar6[3] = *puVar3;
        puVar6[4] = puVar3[1];
        puVar6[5] = puVar3[2];
        puVar6[6] = puVar3[3];
        puVar9 = *(undefined4 **)(unaff_EBP + -0x10);
      }
      *puVar9 = puVar6;
LAB_00706242:
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return puVar6;
    }
    iVar5 = FUN_0045ec92(*(undefined4 *)(unaff_EBP + 8));
    if (iVar5 != 0) {
      puVar9 = *(undefined4 **)(unaff_EBP + 0xc);
      if (puVar9 != (undefined4 *)0x0) {
        puVar6[3] = *puVar9;
        puVar6[4] = puVar9[1];
        puVar6[5] = puVar9[2];
        puVar6[6] = puVar9[3];
      }
      goto LAB_00706242;
    }
    puVar6 = (undefined4 *)puVar6[1];
  } while( true );
}


