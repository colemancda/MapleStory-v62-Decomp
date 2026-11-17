/* FUN_0045bf3b - 0x0045bf3b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Removing unreachable block (ram,0x0045bfbf) */

void FUN_0045bf3b(void)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  char *_Str1;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar3 = FUN_004b3d90();
  if (iVar3 != 0) {
    puVar4 = (undefined4 *)FUN_0045b90e(unaff_EBP + -0x10);
    if (((char *)*puVar4 == (char *)0x0) || (*(char *)*puVar4 == '\0')) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    FUN_00414ebb();
    if (!bVar2) {
      FUN_0045b90e(unaff_EBP + -0x14);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      piVar5 = (int *)FUN_0045e08c(unaff_EBP + -0x10,1);
      _Str1 = (char *)*piVar5;
      if ((char *)*piVar5 == (char *)0x0) {
        _Str1 = DAT_00980dfc;
      }
      iVar3 = _strcmp(_Str1,&DAT_009645ac);
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
      if (iVar3 == 0) {
        piVar5 = (int *)FUN_0045b90e(unaff_EBP + -0x20);
        iVar3 = *piVar5;
        *(undefined4 *)(unaff_EBP + -4) = 1;
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(iVar3 + -4);
        }
        FUN_0045b90e(unaff_EBP + -0x1c);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        puVar4 = (undefined4 *)FUN_0045e070(unaff_EBP + -0x18,iVar3 + -1);
        uVar1 = *puVar4;
        *(undefined1 *)(unaff_EBP + -4) = 3;
        FUN_004a2fef(uVar1);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_00414ebb();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00414ebb();
      }
    }
  }
  FUN_008162ff();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


