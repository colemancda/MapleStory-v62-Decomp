/* FUN_00453925 - 0x00453925 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


BYTE * FUN_00453925(BYTE *param_1,BYTE *param_2,int param_3)

{
  BYTE *pBVar1;
  BYTE BVar2;
  BYTE BVar3;
  BYTE *pBVar4;
  BOOL BVar5;
  BYTE *pBVar6;
  
  if (param_3 == 0) {
    pBVar4 = (BYTE *)FUN_0087b410(param_1,param_2);
  }
  else {
    if (((param_1 != (BYTE *)0x0) && (param_2 != (BYTE *)0x0)) && (*param_1 != '\0')) {
      BVar2 = *param_2;
      while (BVar2 != '\0') {
        BVar2 = *param_2;
        pBVar4 = param_1;
        pBVar6 = param_2;
        while ((BVar2 != '\0' && (BVar3 = *pBVar4, pBVar4 = pBVar4 + 1, BVar3 == BVar2))) {
          pBVar1 = pBVar6 + 1;
          pBVar6 = pBVar6 + 1;
          BVar2 = *pBVar1;
        }
        if (*pBVar6 == '\0') {
          return param_1;
        }
        BVar5 = IsDBCSLeadByte(*param_1);
        if (BVar5 == 0) {
          param_1 = param_1 + 1;
        }
        else {
          param_1 = param_1 + 2;
        }
        BVar2 = *param_1;
      }
    }
    pBVar4 = (BYTE *)0x0;
  }
  return pBVar4;
}


