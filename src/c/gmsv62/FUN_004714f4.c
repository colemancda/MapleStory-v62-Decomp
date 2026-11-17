/* FUN_004714f4 - 0x004714f4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004714f4(BYTE *param_1,BYTE *param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  BOOL BVar3;
  BYTE BVar4;
  BYTE *pBVar5;
  BYTE *pBVar6;
  
  bVar1 = false;
  if (*param_1 != '\0') {
    BVar4 = param_3._3_1_;
    do {
      if (*param_2 == '\0') break;
      iVar2 = FUN_004713ea(param_3,*param_2);
      pBVar5 = param_2;
      if (iVar2 == 0) {
        BVar3 = IsDBCSLeadByte(*param_1);
        *param_2 = *param_1;
        if (BVar3 == 0) {
          param_1 = param_1 + 1;
        }
        else {
          pBVar6 = param_1 + 1;
          pBVar5 = param_2 + 1;
          iVar2 = FUN_004713ea(param_3,param_2[1]);
          if (iVar2 != 0) {
            BVar4 = *pBVar5;
            bVar1 = true;
          }
          param_1 = param_1 + 2;
          *pBVar5 = *pBVar6;
          if (bVar1) {
            bVar1 = false;
            param_2[2] = BVar4;
            pBVar5 = param_2 + 2;
          }
        }
      }
      param_2 = pBVar5 + 1;
    } while (*param_1 != '\0');
  }
  for (; *param_1 != '\0'; param_1 = param_1 + 1) {
    *param_2 = *param_1;
    param_2 = param_2 + 1;
  }
  *param_2 = '\0';
  return;
}


