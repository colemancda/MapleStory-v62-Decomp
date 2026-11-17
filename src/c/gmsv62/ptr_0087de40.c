/* ptr_0087de40 - 0x0087de40 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

void ptr_0087de40(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int unaff_EBP;
  int iVar6;
  undefined4 *puVar5;
  
  puVar4 = *(undefined1 **)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar2 = *(int *)(unaff_EBP + 0x10);
  iVar3 = *(int *)(unaff_EBP + 8);
  iVar6 = *(int *)(unaff_EBP + -0x1c);
  while( true ) {
    iVar6 = *(int *)(*(int *)(iVar2 + 8) + iVar6 * 8);
    *(int *)(unaff_EBP + -0x1c) = iVar6;
    if (iVar6 == *(int *)(unaff_EBP + 0x14)) break;
    if ((iVar6 < 0) || (*(int *)(iVar2 + 4) <= iVar6)) {
      puVar5 = (undefined4 *)(puVar4 + -4);
      puVar4 = puVar4 + -4;
      *puVar5 = 0x87de15;
      FUN_0087e4fd();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar1 = *(int *)(*(int *)(iVar2 + 8) + 4 + iVar6 * 8);
    if (iVar1 != 0) {
      *(undefined4 *)(puVar4 + -4) = 0x103;
      *(int *)(puVar4 + -8) = iVar3;
      *(int *)(puVar4 + -0xc) = iVar1;
      *(undefined4 *)(puVar4 + -0x10) = 0x87de30;
      __CallSettingFrame_12();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  *(int *)(iVar3 + 8) = iVar6;
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return;
}


