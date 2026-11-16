/* FUN_51809558 - 0x51809558 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 FUN_51809558(void)

{
  int *piVar1;
  short sVar2;
  short *psVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  size_t *psVar7;
  char *pcVar8;
  int unaff_EBP;
  LPSTR pCVar9;
  
  FUN_5180ea30();
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    uVar4 = 0x80004003;
    goto LAB_518098cd;
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar5 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 **)(unaff_EBP + 8) = (undefined4 *)(iVar5 + 0x24);
  FUN_518017b5();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_5181022b((void *)(unaff_EBP + -0x14),iVar5 + 0x40);
  uVar4 = *(undefined4 *)(iVar5 + 0x30);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  piVar1 = (int *)(iVar5 + 0x28);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(iVar5 + 0x24) = 0;
  }
  wsprintfA((LPSTR)(unaff_EBP + -0x94),s__dms__5181f68c,uVar4);
  pCVar9 = (LPSTR)(unaff_EBP + -0x94);
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    iVar5 = memcmp((void *)(*(int *)(unaff_EBP + -0x10) + 0x2c),&DAT_51819dd0,0x10);
    if (iVar5 == 0) {
      iVar5 = (*DAT_5181faf8)(unaff_EBP + -0x94);
      pCVar9 = (LPSTR)(unaff_EBP + -0x94 + iVar5);
      iVar5 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x44);
      if (*(short *)(iVar5 + 2) == 1) {
        pcVar8 = s_mono__5181f684;
      }
      else {
        pcVar8 = s_stereo__5181f67c;
        if (*(short *)(iVar5 + 2) != 2) {
          pcVar8 = &DAT_5181fe2c;
        }
      }
      wsprintfA(pCVar9,s__d__d__s_dkbps__5181f66c,*(undefined4 *)(iVar5 + 4),
                (uint)*(ushort *)(iVar5 + 0xe),pcVar8,*(uint *)(iVar5 + 8) >> 10);
    }
  }
  iVar5 = (*DAT_5181faf8)(pCVar9);
  if (*(int *)(unaff_EBP + -0x10) == 0) {
LAB_51809668:
    pcVar8 = s_empty_5181f664;
  }
  else {
    iVar6 = memcmp(*(void **)(unaff_EBP + -0x10),&DAT_51819cf0,0x10);
    if (iVar6 == 0) goto LAB_51809668;
    iVar6 = memcmp(*(void **)(unaff_EBP + -0x10),&DAT_51819ef0,0x10);
    if (iVar6 == 0) {
LAB_51809815:
      pcVar8 = &DAT_5181f5fc;
    }
    else {
      iVar6 = memcmp(*(void **)(unaff_EBP + -0x10),&DAT_51819ee0,0x10);
      if (iVar6 != 0) goto LAB_51809876;
      iVar6 = memcmp((void *)(*(int *)(unaff_EBP + -0x10) + 0x10),&DAT_51819e50,0x10);
      if (iVar6 == 0) {
        pcVar8 = &DAT_5181f65c;
      }
      else {
        iVar6 = memcmp((void *)(*(int *)(unaff_EBP + -0x10) + 0x10),&DAT_51819e80,0x10);
        if (iVar6 == 0) {
          pcVar8 = &DAT_5181f658;
        }
        else {
          iVar6 = memcmp((void *)(*(int *)(unaff_EBP + -0x10) + 0x10),&DAT_51819e90,0x10);
          if (iVar6 == 0) {
            pcVar8 = &DAT_5181f654;
          }
          else {
            iVar6 = memcmp((void *)(*(int *)(unaff_EBP + -0x10) + 0x10),&DAT_51819e60,0x10);
            if (iVar6 == 0) {
              pcVar8 = &DAT_5181f650;
            }
            else {
              iVar6 = memcmp((void *)(*(int *)(unaff_EBP + -0x10) + 0x10),&DAT_51819e30,0x10);
              if (iVar6 == 0) {
                pcVar8 = s_DSSAUDIO_5181f644;
              }
              else {
                iVar6 = memcmp((void *)(*(int *)(unaff_EBP + -0x10) + 0x10),&DAT_51819e40,0x10);
                if (iVar6 == 0) {
                  pcVar8 = s_DSSVIDEO_5181f638;
                }
                else {
                  iVar6 = memcmp((void *)(*(int *)(unaff_EBP + -0x10) + 0x10),&DAT_51819ea0,0x10);
                  if (iVar6 == 0) {
                    pcVar8 = s_MPEG1AUDIO_5181f62c;
                  }
                  else {
                    iVar6 = memcmp((void *)(*(int *)(unaff_EBP + -0x10) + 0x10),&DAT_51819ed0,0x10);
                    if (iVar6 == 0) {
                      pcVar8 = s_MPEG1SYSTEM_5181f620;
                    }
                    else {
                      iVar6 = memcmp((void *)(*(int *)(unaff_EBP + -0x10) + 0x10),&DAT_51819eb0,0x10
                                    );
                      if (iVar6 == 0) {
                        pcVar8 = s_MPEG1VIDEO_5181f614;
                      }
                      else {
                        iVar6 = memcmp((void *)(*(int *)(unaff_EBP + -0x10) + 0x10),&DAT_51819ec0,
                                       0x10);
                        if (iVar6 == 0) {
                          pcVar8 = s_MPEG1VIDEOCD_5181f604;
                        }
                        else {
                          iVar6 = memcmp((void *)(*(int *)(unaff_EBP + -0x10) + 0x10),&DAT_51819ef0,
                                         0x10);
                          if (iVar6 == 0) goto LAB_51809815;
                          iVar6 = memcmp((void *)(*(int *)(unaff_EBP + -0x10) + 0x10),&DAT_51819e70,
                                         0x10);
                          if (iVar6 == 0) {
                            psVar3 = *(short **)(*(int *)(unaff_EBP + -0x10) + 0x44);
                            if ((psVar3 == (short *)0x0) || (sVar2 = *psVar3, sVar2 == 1)) {
                              pcVar8 = &DAT_5181f5f8;
                            }
                            else if (sVar2 == 2) {
                              pcVar8 = s_ADPCM_5181f5f0;
                            }
                            else if (sVar2 == 0x50) {
                              pcVar8 = &DAT_5181f5e8;
                            }
                            else {
                              if (sVar2 != 0x55) goto LAB_51809876;
                              pcVar8 = s_MPEGLAYER3_5181f5dc;
                            }
                          }
                          else {
LAB_51809876:
                            pcVar8 = s_unknown_5181f5d4;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  (*DAT_5181faf0)(pCVar9 + iVar5,pcVar8);
  iVar5 = (*DAT_5181faf8)(unaff_EBP + -0x94);
  psVar7 = FUN_51802bf3(0,iVar5);
  **(undefined4 **)(unaff_EBP + 0xc) = psVar7;
  (*DAT_5181fb00)(0,0,unaff_EBP + -0x94,iVar5,psVar7,0x3fffffff);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_51813012(unaff_EBP + -0x14);
  }
  uVar4 = 0;
LAB_518098cd:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


