/* ptr_004944e8 - 0x004944e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_004944e8(void)

{
  int in_EAX;
  int iVar1;
  int unaff_EBP;
  uint unaff_ESI;
  int unaff_EDI;
  bool bVar2;
  undefined4 uStack_c;
  int iStack_8;
  uint uStack_4;
  
  if ((in_EAX == 2) || (in_EAX == *(int *)(unaff_EDI + 0x202c))) {
    while( true ) {
      iVar1 = *(int *)(*(int *)(unaff_EBP + 0xc) + 0x5c);
      if ((iVar1 == 0) || (*(uint *)(iVar1 + -4) <= unaff_ESI)) break;
      uStack_4 = *(undefined4 *)(iVar1 + unaff_ESI * 4);
      iStack_8 = unaff_EBP + -0x1c;
      uStack_c = 0x494524;
      FUN_0084a5e4();
      uStack_4 = 1;
      *(undefined4 **)(unaff_EBP + -0x14) = &uStack_c;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_0045e0ed(unaff_EBP + -0x1c);
      iVar1 = FUN_00494214();
      if (iVar1 != 0) {
        *(undefined4 *)(*(int *)(*(int *)(unaff_EBP + -0x10) + 0x210) + 0x4dc) = 1;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        uStack_4 = 0;
        iStack_8 = 0x49456d;
        FUN_0045e794();
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
      }
      unaff_ESI = unaff_ESI + 1;
    }
    unaff_ESI = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    bVar2 = *(int *)(unaff_EBP + 0xc) == 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    bVar2 = *(uint *)(unaff_EBP + 0xc) == unaff_ESI;
  }
  if (!bVar2) {
    iStack_8 = 0x4945a5;
    uStack_4 = unaff_ESI;
    FUN_0045e794();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


