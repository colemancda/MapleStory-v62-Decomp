/* ptr_007896b4 - 0x007896b4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall ptr_007896b4(undefined4 param_1,int param_2)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int *unaff_EBX;
  int unaff_EBP;
  int iVar3;
  int unaff_EDI;
  
  iVar2 = param_2;
  do {
    iVar3 = iVar2;
    iVar2 = iVar3;
    do {
      iVar1 = *(int *)(in_EAX + -0x40);
      if (*(int *)(in_EAX + -0x40) == 0) {
        iVar1 = iVar2;
      }
      iVar2 = FUN_008858f0(iVar1,iVar3);
      if (iVar2 < 0) {
        *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + 0x14) + 1;
      }
      iVar2 = *(int *)(unaff_EBP + 0x14);
      do {
        iVar3 = (iVar2 + unaff_EDI) * 0x44;
        iVar2 = *(int *)(*unaff_EBX + iVar3 + -0x40);
        if (iVar2 == 0) {
          iVar2 = DAT_00980dfc;
        }
        iVar1 = DAT_00980dfc;
        if (*(int *)(unaff_EBP + -0x4c) != 0) {
          iVar1 = *(int *)(unaff_EBP + -0x4c);
        }
        iVar2 = FUN_008858f0(iVar1,iVar2);
        if (-1 < iVar2) {
LAB_00789729:
          FUN_00776a8e(unaff_EBP + -0x50);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_00773f2e();
          ExceptionList = *(void **)(unaff_EBP + -0xc);
          return;
        }
        FUN_00776a8e(iVar3 + -0x44 + *unaff_EBX);
        *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0x14);
        if (*(int *)(unaff_EBP + 8) < *(int *)(unaff_EBP + 0x14)) goto LAB_00789729;
        iVar2 = *(int *)(unaff_EBP + 0xc) * 2;
        *(int *)(unaff_EBP + 0x14) = iVar2;
      } while (*(int *)(unaff_EBP + 0x10) <= iVar2);
      iVar2 = (iVar2 + unaff_EDI) * 0x44;
      iVar3 = *(int *)(*unaff_EBX + 4 + iVar2);
      in_EAX = *unaff_EBX + iVar2;
      iVar2 = DAT_00980dfc;
    } while (iVar3 != 0);
  } while( true );
}


