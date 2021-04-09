# -------------------------------
# EDIT THESE VARIABLES
# -------------------------------
# The size of the page
w, h = 980, 490
# The text to be drawn
text_string = 'Animating in Drawbot!'
# The number of lines
lines = 5
# The font name
font_name = 'MalvaVariable-Italic'
# The background and foreground colors
bg_r, bg_g, bg_b = 25, 29, 59
fg_r, fg_g, fg_b = 235, 0, 89
# The number of frames and the total duration
total_frames = 30
total_duration = 2 # in seconds
# -------------------------------

# Count the number of characters
chars = len(text_string)
# Calculate the font size
font_size = w / 12
# Get and store the minimum and maximum wght values
min_var = listFontVariations(font_name)['wght']['minValue']
max_var = listFontVariations(font_name)['wght']['maxValue']
# Calculate the duration of each frame
frame_duration = total_duration / total_frames

# For each frame...
for frame in range(total_frames):

    # Create a new page and set its duration
    newPage(w, h)
    frameDuration(frame_duration)

    # Draw the background rectangle
    fill(bg_r/255, bg_g/255, bg_b/255)
    rect(0,0,w,h)
    
    # Calculate the vertical position of the first line
    y = (h - (lines * font_size)) / 2
    y = y + w/50

    # Start each frame in a different wght value
    frame_start = (2 * pi) * frame / total_frames

    # For each line...
    for line in range(lines):
        
        # Start each LINE in a different wght value
        step_start = frame_start - (pi * (line / (lines - 1)))
        
        # Create a new empty text object and set its properties
        txt = FormattedString()
        txt.fill(fg_r/255, fg_g/255, fg_b/255)
        txt.font(font_name)
        txt.fontSize(font_size)
        txt.openTypeFeatures(ss01=True)

        # For each character
        for char_index in range(chars):
            
            # Calculate the wght value
            inst_step = pi * (char_index / (chars -1))
            curr_step = (cos(step_start - inst_step) + 1) / 2
            wght_value = min_var + curr_step * (max_var - min_var)
            
            # Add the character to the text object
            txt.append(
                text_string[char_index], 
                fontVariations=dict(wght=wght_value)
                )
        
        # After all characters were added 
        # to the text object, get its dimensions
        text_width, text_height = textSize(txt)

        # Calculate the horizontal position required 
        # to center this line on the page
        x = (w - text_width) / 2
        
        # Finally draw this line of text
        text(txt, (x, y))

        # Move the y coordinate up for the next line
        y = y + font_size
    
# Save the animation as a gif
saveImage("Animating in Drawbot.gif")