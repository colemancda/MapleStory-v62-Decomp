/* FUN_004a9811 - 0x004a9811 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004a9811(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = *(int *)(extraout_ECX + 0x5c);
  if (((-1 < iVar1) && (iVar2 = *(int *)(extraout_ECX + 0x40), iVar1 != iVar2)) && (-1 < iVar1)) {
    if (*(int *)(extraout_ECX + 0x34) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(extraout_ECX + 0x34) + -4);
    }
    if ((iVar1 <= iVar3) && (-1 < iVar2)) {
      if (*(int *)(extraout_ECX + 0x34) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(extraout_ECX + 0x34) + -4);
      }
      if (iVar2 <= iVar3) {
        *(int *)(unaff_EBP + -0x10) = iVar2;
        *(int *)(unaff_EBP + -0x14) = iVar1;
        if (iVar2 < iVar1) {
          FUN_004459fe(unaff_EBP + -0x14,unaff_EBP + -0x10);
        }
        FUN_0045e053(unaff_EBP + -0x18,*(undefined4 *)(unaff_EBP + -0x14),
                     *(undefined4 *)(unaff_EBP + -0x10));
        *(undefined4 *)(unaff_EBP + -4) = 0;
        FUN_0082812c(*(undefined4 *)(unaff_EBP + -0x18));
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00414ebb();
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


