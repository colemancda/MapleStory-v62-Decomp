/* FUN_004951a5 - 0x004951a5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004951a5(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 *puVar2;
  int iVar3;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  while ((iVar3 = *(int *)(*(int *)(extraout_ECX + 0x78) + 0x44), iVar3 != 0 &&
         (*(uint *)(unaff_EBP + -0x10) < *(uint *)(iVar3 + -4)))) {
    puVar2 = (undefined4 *)(iVar3 + *(int *)(unaff_EBP + -0x14));
    iVar3 = puVar2[4];
    if ((iVar3 != -1) && (iVar3 < puVar2[5] + iVar3)) {
      do {
        FUN_004903a3(unaff_EBP + -0x1c,iVar3);
        iVar1 = *(int *)(*(int *)(unaff_EBP + -0x18) + 0xc);
        *(undefined4 *)(unaff_EBP + -4) = 0;
        if (iVar1 == *(int *)(unaff_EBP + 8)) {
          FUN_0045d016(*puVar2,puVar2[1],iVar3 - puVar2[4]);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + -0x18) != 0) {
          FUN_0045e794(0);
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)(puVar2[4] + puVar2[5]));
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x1c;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


