/* FUN_5180f981 - 0x5180f981 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_5180f981(void)

{
  uint uVar1;
  int iVar2;
  short *_Dst;
  undefined4 uVar3;
  int iVar4;
  int unaff_EBP;
  undefined4 *puVar5;
  
  FUN_5180ea30();
  iVar4 = *(int *)(unaff_EBP + 8);
  if (*(void **)(iVar4 + 4) != (void *)0x0) {
    iVar2 = memcmp(*(void **)(iVar4 + 4),&DAT_51819ee0,0x10);
    if (iVar2 == 0) {
      iVar2 = memcmp((void *)(*(int *)(iVar4 + 4) + 0x10),&DAT_51819e70,0x10);
      if (iVar2 == 0) {
        iVar2 = memcmp((void *)(*(int *)(iVar4 + 4) + 0x2c),&DAT_51819dd0,0x10);
        if (iVar2 == 0) {
          *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(*(int *)(iVar4 + 4) + 0x44);
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
          FUN_51807cf2(unaff_EBP + -0x1c);
          puVar5 = *(undefined4 **)(unaff_EBP + -0x18);
          *puVar5 = DAT_51819ee0;
          puVar5[1] = DAT_51819ee4;
          puVar5[2] = DAT_51819ee8;
          puVar5[3] = DAT_51819eec;
          iVar4 = *(int *)(unaff_EBP + -0x18);
          *(undefined4 *)(iVar4 + 0x10) = DAT_51819e70;
          *(undefined4 *)(iVar4 + 0x14) = DAT_51819e74;
          *(undefined4 *)(iVar4 + 0x18) = DAT_51819e78;
          *(undefined4 *)(iVar4 + 0x1c) = DAT_51819e7c;
          *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x20) = 1;
          *(undefined4 *)(unaff_EBP + -4) = 0;
          _Dst = (short *)FUN_51809499(*(void **)(unaff_EBP + -0x18),(undefined4 *)&DAT_51819dd0,
                                       0x1e);
          memset(_Dst,0,0x1e);
          *(undefined4 *)(unaff_EBP + -0xa4) = *(undefined4 *)(unaff_EBP + -0x10);
          *(short **)(unaff_EBP + -0xa0) = _Dst;
          puVar5 = (undefined4 *)(unaff_EBP + -0x9c);
          for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
          iVar4 = acmDriverEnum(FUN_5180fbb4,unaff_EBP + -0xa4,0);
          if ((iVar4 == 0) && (*_Dst != 0)) {
            *(undefined4 *)(unaff_EBP + -0x14) = 0;
            iVar4 = acmStreamOpen(unaff_EBP + -0x14,0,*(undefined4 *)(unaff_EBP + -0x10),_Dst,0,0,0,
                                  4);
            if (iVar4 == 0) {
              iVar4 = *(int *)(*(int *)(unaff_EBP + 0xc) + 4);
              *(undefined4 *)(unaff_EBP + -0x28) = 0;
              *(undefined4 *)(unaff_EBP + -0x10) = 0;
              if (unaff_EBP != 0x10) {
                *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(iVar4 + 0xc);
              }
              uVar3 = *(undefined4 *)(iVar4 + 8);
              iVar4 = acmStreamSize(*(undefined4 *)(unaff_EBP + -0x14),
                                    *(undefined4 *)(unaff_EBP + -0x10),unaff_EBP + -0x28,0);
              if (iVar4 == 0) {
                *(undefined4 *)(unaff_EBP + -0x20) = 0;
                FUN_51807cbf(unaff_EBP + -0x24);
                uVar1 = *(uint *)(unaff_EBP + -0x28);
                *(undefined4 *)(unaff_EBP + -0x7c) = 0x54;
                puVar5 = (undefined4 *)(unaff_EBP + -0x78);
                for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *puVar5 = 0;
                  puVar5 = puVar5 + 1;
                }
                *(undefined1 *)(unaff_EBP + -4) = 1;
                *(undefined4 *)(unaff_EBP + -0x70) = uVar3;
                *(undefined4 *)(unaff_EBP + -0x6c) = *(undefined4 *)(unaff_EBP + -0x10);
                *(undefined4 *)(unaff_EBP + -100) = 4;
                uVar3 = FUN_51805b3e(*(void **)(unaff_EBP + -0x20),uVar1);
                *(undefined4 *)(unaff_EBP + -0x60) = uVar3;
                *(undefined4 *)(unaff_EBP + -0x5c) = *(undefined4 *)(unaff_EBP + -0x28);
                iVar4 = acmStreamPrepareHeader
                                  (*(undefined4 *)(unaff_EBP + -0x14),unaff_EBP + -0x7c,0);
                if (iVar4 == 0) {
                  iVar4 = acmStreamConvert(*(undefined4 *)(unaff_EBP + -0x14),unaff_EBP + -0x7c,0x24
                                          );
                  if (iVar4 == 0) {
                    FUN_51805b5f(*(void **)(unaff_EBP + -0x20),0,*(undefined4 *)(unaff_EBP + -0x58))
                    ;
                    FUN_5181022b(*(void **)(unaff_EBP + 8),unaff_EBP + -0x1c);
                    FUN_5181022b(*(void **)(unaff_EBP + 0xc),unaff_EBP + -0x24);
                  }
                  acmStreamUnprepareHeader(*(undefined4 *)(unaff_EBP + -0x14),unaff_EBP + -0x7c,0);
                }
                acmStreamClose(*(undefined4 *)(unaff_EBP + -0x14),0);
                *(undefined1 *)(unaff_EBP + -4) = 0;
                if (*(int *)(unaff_EBP + -0x20) != 0) {
                  FUN_51813012(unaff_EBP + -0x24);
                  *(undefined4 *)(unaff_EBP + -0x20) = 0;
                }
              }
            }
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (*(int *)(unaff_EBP + -0x18) != 0) {
            FUN_51813012(unaff_EBP + -0x1c);
          }
        }
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


