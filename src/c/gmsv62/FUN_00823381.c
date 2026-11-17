/* FUN_00823381 - 0x00823381 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00823381(void)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  int iVar6;
  
  FUN_00879bb8();
  iVar5 = 0;
  while( true ) {
    puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0x48c);
    uVar1 = *puVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar4 = (*DAT_0097b468)(uVar1);
    iVar6 = iVar5;
    if ((iVar4 == 0) && (iVar6 = iVar5 + 300, iVar5 < 600)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    if (!bVar2) {
      iVar5 = 0;
      goto LAB_008233f2;
    }
    iVar5 = (*DAT_0097b49c)();
    if (iVar5 == 2) break;
    (*DAT_0097b3ec)(iVar6);
    iVar5 = iVar6;
  }
LAB_0082344e:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
LAB_008233f2:
  puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x48d);
  uVar1 = *puVar3;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iVar4 = (*DAT_0097b468)(uVar1);
  iVar6 = iVar5;
  if ((iVar4 == 0) && (iVar6 = iVar5 + 300, iVar5 < 600)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  if (!bVar2) goto LAB_0082344e;
  iVar5 = (*DAT_0097b49c)();
  if (iVar5 == 2) goto LAB_0082344e;
  (*DAT_0097b3ec)(iVar6);
  iVar5 = iVar6;
  goto LAB_008233f2;
}


